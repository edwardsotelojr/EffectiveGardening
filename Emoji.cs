namespace AnimatingViews
{
    public partial class AnimatingViewsWindowController
    {
        private string GetEmoji(string str)
        {
            string emoji = str switch
            {
                "Overcast" => " ☁️ ",
                "Drizzle" => " 🌧 ",
                "Possible Drizzle" => " ☁️ ",
                "Partly Cloudy" => " 🌤 ",
                "Mostly Cloudy" => " ⛅️ ",
                "Possible Light Rain" => " 🌨 ",
                "Sunny" => " ☀️ ",
                "Clear Skies" => " ☀️ ",
                _ => " ",
            };
            return emoji;
        }
    }
}
